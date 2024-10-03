//
//  moutis_config.dtsi
//
//
//  Created by Alan on 7/24/22.
//

#define H_DIGRAPH_COMBOS //  (th, ch, sh, wh, gh, ph)
#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
#define COMMA_CAP     // , before alpha capitalizes that alpha

#define my_tapping_term 170
#define my_quick_tapping_term 55
#define my_ak_delay 40

// my layers
#define l_any   -1
#ifdef staticlayers
#define l_alpha 0
#define l_akG   1
#define l_akM   2
#define l_akX   3
#define l_akT   4
#define l_akC   5
#define l_akK   6
#define l_akD   7
#define l_akW   8
#define l_akF   9
#define l_akP   10
#define l_akH   11
#define l_akB   12
#define l_akV   13
#define l_akJ   14
#define l_akA   15
#define l_akU   16
#define l_akE   17
#define l_akO   18
#define l_akI   19
#define l_akDot 20
#define l_akFSLH 21
#define l_sym   22
#define l_num   23
#define l_fun   24
#define l_nav   25
#define l_cfg   26
#endif
enum mylayers { // need to sort these some day
#define l_alpha 0,
        l_akG,
        l_akM,
        l_akX,
        l_akT,
        l_akC,
        l_akK,
        l_akD,
        l_akW,
        l_akF,
        l_akP,
        l_akH,
        l_akB,
        l_akV,
        l_akJ,
        l_akA,
        l_akU,
        l_akE,
        l_akO,
        l_akI,
        l_akDot,
        l_akFSLH,
        l_sym,
        l_num,
        l_fun,
        l_nav,
        l_cfg
};

&mt {
    tapping-term-ms = <my_tapping_term>;
};
&sl {
    release-after-ms = <my_tapping_term>;
};
&caps_word {
    continue-list = <UNDER MINUS BSPC DEL LEFT RIGHT>;
};
