/*
 * File: list-packets.h
 * Purpose: Packet types
 */

/*
 * packet type
 * setup receive method (server)
 * playing receive method (server)
 * setup receive method (client)
 * playing receive method (client)
 *
 * Use "undefined" for forbidden combinations (disconnects the client)
 */

/* Undefined packet */
PKT(UNDEFINED, undefined, undefined, undefined, undefined)
/* Packets sent to the client */
PKT(BASIC_INFO, undefined, undefined, basic_info, undefined)
PKT(END, undefined, undefined, end, end)
PKT(STRUCT_INFO, undefined, undefined, struct_info, undefined)
PKT(DEATH_CAUSE, undefined, undefined, undefined, death_cause)
PKT(WINNER, undefined, undefined, undefined, winner)
PKT(LEV, undefined, undefined, undefined, lvl)
PKT(WEIGHT, undefined, undefined, undefined, weight)
PKT(PLUSSES, undefined, undefined, undefined, plusses)
PKT(AC, undefined, undefined, undefined, ac)
PKT(EXP, undefined, undefined, undefined, exp)
PKT(GOLD, undefined, undefined, undefined, gold)
PKT(HP, undefined, undefined, undefined, hp)
PKT(SP, undefined, undefined, undefined, sp)
PKT(VARIOUS, undefined, undefined, undefined, various)
PKT(STAT, undefined, undefined, undefined, stat)
PKT(INDEX, undefined, undefined, undefined, index)
PKT(ITEM_REQUEST, undefined, undefined, undefined, item_request)
PKT(TITLE, undefined, undefined, undefined, title)
PKT(TURN, undefined, undefined, undefined, turn)
PKT(DEPTH, undefined, undefined, undefined, depth)
PKT(STATUS, undefined, undefined, undefined, status)
PKT(RECALL, undefined, undefined, undefined, recall)
PKT(STATE, undefined, undefined, undefined, state)
PKT(LINE_INFO, undefined, undefined, undefined, line_info)
PKT(SPEED, undefined, undefined, undefined, speed)
PKT(STUDY, undefined, undefined, undefined, study)
PKT(COUNT, undefined, undefined, undefined, count)
PKT(SHOW_FLOOR, undefined, undefined, undefined, show_floor)
PKT(CHAR, undefined, undefined, undefined, char)
PKT(SPELL_INFO, undefined, undefined, undefined, spell_info)
PKT(BOOK_INFO, undefined, undefined, undefined, book_info)
PKT(FLOOR, undefined, undefined, undefined, floor)
PKT(SPECIAL_OTHER, undefined, undefined, undefined, special_other)
PKT(STORE, undefined, undefined, undefined, store)
PKT(STORE_INFO, undefined, undefined, undefined, store_info)
PKT(TARGET_INFO, undefined, undefined, undefined, target_info)
PKT(SOUND, undefined, undefined, undefined, sound)
PKT(MINI_MAP, undefined, undefined, undefined, line_info)
PKT(SKILLS, undefined, undefined, undefined, skills)
PKT(PAUSE, undefined, undefined, undefined, pause)
PKT(MONSTER_HEALTH, undefined, undefined, undefined, monster_health)
PKT(AWARE, undefined, undefined, undefined, aware)
PKT(EVERSEEN, undefined, undefined, undefined, everseen)
PKT(EGO_EVERSEEN, undefined, undefined, undefined, ego_everseen)
PKT(CURSOR, undefined, undefined, undefined, cursor)
PKT(OBJFLAGS, undefined, undefined, undefined, objflags)
PKT(SPELL_DESC, undefined, undefined, undefined, spell_desc)
PKT(DTRAP, undefined, undefined, undefined, dtrap)
PKT(TERM, undefined, undefined, undefined, term_info)
PKT(PLAYER, undefined, undefined, undefined, player_pos)
PKT(MESSAGE_FLUSH, undefined, undefined, undefined, message_flush)
/* Packets sent from the client */
PKT(VERIFY, verify, undefined, undefined, undefined)
PKT(ICKY, icky, icky, undefined, undefined)
PKT(SYMBOL_QUERY, undefined, symbol_query, undefined, undefined)
PKT(POLY_RACE, undefined, poly_race, undefined, undefined)
PKT(BREATH, undefined, breath, undefined, undefined)
PKT(WALK, undefined, walk, undefined, undefined)
PKT(RUN, undefined, run, undefined, undefined)
PKT(TUNNEL, undefined, tunnel, undefined, undefined)
PKT(AIM_WAND, undefined, aim_wand, undefined, undefined)
PKT(DROP, undefined, drop, undefined, undefined)
PKT(IGNORE_DROP, undefined, ignore_drop, undefined, undefined)
PKT(FIRE, undefined, fire, undefined, undefined)
PKT(PICKUP, undefined, pickup, undefined, undefined)
PKT(DESTROY, undefined, destroy, undefined, undefined)
PKT(TARGET_CLOSEST, undefined, target_closest, undefined, undefined)
PKT(SPELL, undefined, spell, undefined, undefined)
PKT(OPEN, undefined, open, undefined, undefined)
PKT(QUAFF, undefined, quaff, undefined, undefined)
PKT(READ, undefined, read, undefined, undefined)
PKT(TAKE_OFF, undefined, take_off, undefined, undefined)
PKT(USE, undefined, use, undefined, undefined)
PKT(THROW, undefined, throw, undefined, undefined)
PKT(WIELD, undefined, wield, undefined, undefined)
PKT(ZAP, undefined, zap, undefined, undefined)
PKT(TARGET, undefined, target_interactive, undefined, undefined)
PKT(INSCRIBE, undefined, inscribe, undefined, undefined)
PKT(UNINSCRIBE, undefined, uninscribe, undefined, undefined)
PKT(ACTIVATE, undefined, activate, undefined, undefined)
PKT(DISARM, undefined, disarm, undefined, undefined)
PKT(EAT, undefined, eat, undefined, undefined)
PKT(FILL, undefined, fill, undefined, undefined)
PKT(LOCATE, undefined, locate, undefined, undefined)
PKT(MAP, undefined, map, undefined, undefined)
PKT(STEALTH_MODE, undefined, stealth_mode, undefined, undefined)
PKT(QUEST, undefined, quest, undefined, undefined)
PKT(CLOSE, undefined, close, undefined, undefined)
PKT(GAIN, undefined, gain, undefined, undefined)
PKT(GO_UP, undefined, go_up, undefined, undefined)
PKT(GO_DOWN, undefined, go_down, undefined, undefined)
PKT(DROP_GOLD, undefined, drop_gold, undefined, undefined)
PKT(REDRAW, redraw, redraw, undefined, undefined)
PKT(REST, undefined, rest, undefined, undefined)
PKT(GHOST, undefined, ghost, undefined, undefined)
PKT(SUICIDE, undefined, suicide, undefined, undefined)
PKT(STEAL, undefined, steal, undefined, undefined)
PKT(MASTER, undefined, master, undefined, undefined)
PKT(MIMIC, undefined, mimic, undefined, undefined)
PKT(CLEAR, undefined, clear, undefined, undefined)
PKT(OBSERVE, undefined, observe, undefined, undefined)
PKT(STORE_EXAMINE, undefined, store_examine, undefined, undefined)
PKT(ALTER, undefined, alter, undefined, undefined)
PKT(FIRE_AT_NEAREST, undefined, fire_at_nearest, undefined, undefined)
PKT(JUMP, undefined, jump, undefined, undefined)
PKT(SOCIAL, undefined, social, undefined, undefined)
PKT(MONLIST, undefined, monlist, undefined, undefined)
PKT(FEELING, undefined, feeling, undefined, undefined)
PKT(INTERACTIVE, undefined, interactive, undefined, undefined)
PKT(FOUNTAIN, undefined, fountain, undefined, undefined)
PKT(TIME, undefined, time, undefined, undefined)
PKT(OBJLIST, undefined, objlist, undefined, undefined)
PKT(CENTER, undefined, center, undefined, undefined)
PKT(TOGGLE_IGNORE, undefined, toggle_ignore, undefined, undefined)
PKT(USE_ANY, undefined, use_any, undefined, undefined)
PKT(STORE_ORDER, undefined, store_order, undefined, undefined)
PKT(TRACK_OBJECT, undefined, track_object, undefined, undefined)
/* Packets sent from either the client or server */
PKT(PLAY, play, play, play, undefined)
PKT(QUIT, quit, quit, quit, quit)
PKT(FEATURES, features, undefined, features, undefined)
PKT(TEXT_SCREEN, text_screen, undefined, text_screen, undefined)
PKT(KEEPALIVE, keepalive, keepalive, keepalive, keepalive)
PKT(CHAR_INFO, char_info, undefined, char_info_conn, char_info)
PKT(OPTIONS, options, options, options, undefined)
PKT(CHAR_DUMP, undefined, char_dump, char_dump, char_dump)
PKT(MESSAGE, undefined, message, undefined, message)
PKT(ITEM, undefined, item, undefined, item)
PKT(SELL, undefined, sell, undefined, sell)
PKT(PARTY, undefined, party, undefined, party)
PKT(SPECIAL_LINE, undefined, special_line, undefined, special_line)
PKT(FULLMAP, undefined, fullmap, undefined, fullmap)
PKT(POLY, undefined, poly, undefined, poly)
PKT(PURCHASE, undefined, purchase, undefined, purchase)
PKT(STORE_LEAVE, undefined, store_leave, undefined, store_leave)
PKT(STORE_CONFIRM, undefined, store_confirm, undefined, store_confirm)
PKT(IGNORE, undefined, ignore, undefined, ignore)
PKT(FLUSH, undefined, flush, undefined, flush)
PKT(CHANNEL, undefined, channel, undefined, channel)
PKT(HISTORY, undefined, history, undefined, history)
PKT(AUTOINSCR, autoinscriptions, undefined, undefined, autoinscriptions)
PKT(PLAY_SETUP, undefined, undefined, play_setup, undefined)
