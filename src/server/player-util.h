/*
 * File: player-util.h
 * Purpose: Player utility functions
 */

#ifndef PLAYER_UTIL_H
#define PLAYER_UTIL_H

/*
 * Player regeneration constants
 */
#define PY_REGEN_NORMAL     197     /* Regen factor*2^16 when full */
#define PY_REGEN_WEAK       98      /* Regen factor*2^16 when weak */
#define PY_REGEN_FAINT      33      /* Regen factor*2^16 when fainting */
#define PY_REGEN_HPBASE     1442    /* Min amount hp regen*2^16 */
#define PY_REGEN_MNBASE     524     /* Min amount mana regen*2^16 */

/*
 * Player over-exertion
 */
enum
{
    PY_EXERT_NONE = 0x00,
    PY_EXERT_CON = 0x01,
    PY_EXERT_FAINT = 0x02,
    PY_EXERT_SCRAMBLE = 0x04,
    PY_EXERT_CUT = 0x08,
    PY_EXERT_CONF = 0x10,
    PY_EXERT_HALLU = 0x20,
    PY_EXERT_SLOW = 0x40,
    PY_EXERT_HP = 0x80
};

/*
 * Minimum number of turns required for regeneration to kick in during resting.
 */
#define REST_REQUIRED_FOR_REGEN 5

/*
 * Methods of leaving a level
 */
#define LEVEL_UP            1
#define LEVEL_DOWN          2
#define LEVEL_RAND          3
#define LEVEL_GHOST         4
#define LEVEL_OUTSIDE       5
#define LEVEL_OUTSIDE_RAND  6

/*
 * player_predicate is a function pointer which tests a given player to
 * see if the predicate in question is true.
 */
typedef bool (*player_predicate)(struct player *q);

extern int dungeon_get_next_level(struct player *p, int dlev, int added);
extern void dungeon_change_level(struct player *p, struct chunk *c, struct worldpos *new_wpos,
    byte new_level_method);
extern bool take_hit(struct player *p, int damage, const char *kb_str, bool non_physical,
    const char *died_flavor);
extern void player_regen_hp(struct player *p, struct chunk *c);
extern void player_regen_mana(struct player *p);
extern void player_adjust_hp_precise(struct player *p, s32b hp_gain);
extern s32b player_adjust_mana_precise(struct player *p, s32b sp_gain);
extern void convert_mana_to_hp(struct player *p, s32b sp_long);
extern void player_update_light(struct player *p);
extern void player_over_exert(struct player *p, int flag, int chance, int amount);
extern void use_mana(struct player *p);
extern int player_check_terrain_damage(struct player *p, struct chunk *c);
extern void player_take_terrain_damage(struct player *p, struct chunk *c);
extern bool player_confuse_dir(struct player *p, int *dp);
extern bool player_resting_is_special(s16b count);
extern bool player_is_resting(struct player *p);
extern s16b player_resting_count(struct player *p);
extern void player_resting_set_count(struct player *p, s16b count);
extern void player_resting_cancel(struct player *p, bool disturb);
extern bool player_resting_can_regenerate(struct player *p);
extern void player_resting_step_turn(struct player *p);
extern void player_resting_complete_special(struct player *p);
extern bool player_of_has(struct player *p, int flag);
extern bool player_resists(struct player *p, int element);
extern bool player_is_immune(struct player *p, int element);
extern bool player_can_cast(struct player *p, bool show_msg);
extern bool player_book_has_unlearned_spells(struct player *p);
extern void cancel_running(struct player *p);
extern void disturb(struct player *p, int stop_search);
extern void search(struct player *p, struct chunk *c);
extern bool has_bowbrand(struct player *p, bitflag type, bool blast);
extern bool can_swim(struct player *p);
extern bool hp_player_safe(struct player *p, int num);
extern bool hp_player(struct player *p, int num);
extern int get_player_num(struct player *p);
extern void redraw_picture(struct player *p, int old_num);
extern void current_clear(struct player *p);
extern bool check_st_anchor(struct worldpos *wpos, struct loc *grid);
extern struct dragon_breed *get_dragon_form(struct monster_race *race);
extern void poly_dragon(struct player *p, bool msg);
extern void poly_hydra(struct player *p, bool msg);
extern void poly_bat(struct player *p, int chance, char *killer);
extern void drain_mana(struct player *p, struct source *who, int drain, bool seen);
extern void recall_player(struct player *p, struct chunk *c);
extern int player_digest(struct player *p);
extern void use_energy(struct player *p);
extern bool auto_retaliate(struct player *p, struct chunk *c, bool bypass_inscription);
extern bool has_energy(struct player *p, bool real_command);
extern void set_energy(struct player *p, struct worldpos *wpos);
extern bool player_is_at(struct player *p, struct loc *grid);
extern struct player_race *lookup_player_race(const char *name);
extern bool forbid_entrance_weak(struct player *p);
extern bool forbid_entrance_strong(struct player *p);
extern bool player_is_in_view(struct player *p, int p_idx);
extern bool player_is_visible(struct player *p, int p_idx);
extern bool player_is_invisible(struct player *q);
extern bool player_is_not_invisible(struct player *q);
extern bool player_is_living(struct player *q);
extern bool player_is_trapsafe(struct player *p);

#endif /* PLAYER_UTIL_H */
