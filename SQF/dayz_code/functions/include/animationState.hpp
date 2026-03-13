#ifndef STATE_ACTION

#define STATE_ACTION            0
#define STATE_POSE              4
#define STATE_MOVE              8
#define STATE_STANCE            12
#define STATE_WEAPON            16
#define STATE_DIR               20

#define ACTION_MOVE             "amov"
#define ACTION_IDLE             "aidl"
#define ACTION_DEATH            "adth"
#define ACTION_INV              "ainv"
#define ACTION_SWIM             "aswm"
#define ACTION_VAULT            "aovr"

#define POSE_STAND              "perc"
#define POSE_CROUCH             "pknl"
#define POSE_PRONE              "ppne"

#define MOVE_STOP               "mstp"
#define MOVE_WALK               "mwlk"
#define MOVE_RUN                "mrun"
#define MOVE_SPRINT             "mspr"
#define MOVE_EVASIVE            "meva"

#define STANCE_RAISED           "sras"
#define STANCE_LOWERED          "slow"
#define STANCE_OPTICS           "sopt"
#define STANCE_SURRENDER        "ssur"
#define STANCE_NOWEAPON         "snon"
#define STANCE_THROW            "sgth"

#define WEAPON_PISTOL           "wpst"
#define WEAPON_RIFLE            "wrfl"
#define WEAPON_LAUNCHER         "wlnr"
#define WEAPON_NOWEAPON         "wnon"
#define WEAPON_BINOCULAR        "wbin"

#define DIR_NONE                "dnon"
#define DIR_FWD                 "df"
#define DIR_FWD_LEFT            "dfl"
#define DIR_FWD_RIGHT           "dfr"
#define DIR_LEFT                "dl"
#define DIR_RIGHT               "dr"
#define DIR_BACK                "db"
#define DIR_BACK_LEFT           "dbl"
#define DIR_BACK_RIGHT          "dbr"
#define DIR_UP                  "dup"
#define DIR_DOWN                "ddn"

#endif