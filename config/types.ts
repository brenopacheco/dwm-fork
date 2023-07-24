type TagChangeEvent = {
    monitor_number: number;
    old_state: {
        selected: number;
        occupied: number;
        urgent: number;
    };
    new_state: {
        selected: number;
        occupied: number;
        urgent: number;
    };
}

type ClientFocusChangeEvent = {
    monitor_number: number;
    old_win_id: number | null;
    new_win_id: number | null;
}

type LayoutChangeEvent = {
    monitor_number: number;
    old_symbol: string;
    old_address: number;
    new_symbol: string;
    new_address: number;
}

type MonitorFocusChangeEvent = {
    old_monitor_number: number;
    new_monitor_number: number;
}

type FocusedTitleChangeEvent = {
    monitor_number: number;
    client_window_id: number;
    old_name: string;
    new_name: string;
}

type FocusedStateChangeEvent = {
    monitor_number: number;
    client_window_id: number;
    old_state: {
        old_state: boolean;
        is_fixed: boolean;
        is_floating: boolean;
        is_fullscreen: boolean;
        is_urgent: boolean;
        never_focus: boolean;
    };
    new_state: {
        old_state: boolean;
        is_fixed: boolean;
        is_floating: boolean;
        is_fullscreen: boolean;
        is_urgent: boolean;
        never_focus: boolean;
    };
}
