#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolSuggestedPlayersSuggestedPlayersReason_t {
    LegacyPlayAgain_E = 9999,
    OnlineFriend_E = 2,
    PreviousPremade_E = 1,
    VictoriousComrade_E = 5,
    FriendOfFriend_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersReason_t& v) {
    switch(v) {
      case LolSuggestedPlayersSuggestedPlayersReason_t::LegacyPlayAgain_E:
        j = "LegacyPlayAgain";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason_t::OnlineFriend_E:
        j = "OnlineFriend";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason_t::PreviousPremade_E:
        j = "PreviousPremade";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason_t::VictoriousComrade_E:
        j = "VictoriousComrade";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason_t::FriendOfFriend_E:
        j = "FriendOfFriend";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LegacyPlayAgain"){
      v = LolSuggestedPlayersSuggestedPlayersReason_t::LegacyPlayAgain_E;
      return;
    }
    if(s == "OnlineFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason_t::OnlineFriend_E;
      return;
    }
    if(s == "PreviousPremade"){
      v = LolSuggestedPlayersSuggestedPlayersReason_t::PreviousPremade_E;
      return;
    }
    if(s == "VictoriousComrade"){
      v = LolSuggestedPlayersSuggestedPlayersReason_t::VictoriousComrade_E;
      return;
    }
    if(s == "FriendOfFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason_t::FriendOfFriend_E;
      return;
    }
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersReason_t& v) {
    switch(v) {
      case LolSuggestedPlayersSuggestedPlayersReason_t::LegacyPlayAgain_E:
        return "LegacyPlayAgain";
      case LolSuggestedPlayersSuggestedPlayersReason_t::OnlineFriend_E:
        return "OnlineFriend";
      case LolSuggestedPlayersSuggestedPlayersReason_t::PreviousPremade_E:
        return "PreviousPremade";
      case LolSuggestedPlayersSuggestedPlayersReason_t::VictoriousComrade_E:
        return "VictoriousComrade";
      case LolSuggestedPlayersSuggestedPlayersReason_t::FriendOfFriend_E:
        return "FriendOfFriend";
    }
  }

}
