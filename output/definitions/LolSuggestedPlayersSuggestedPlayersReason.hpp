#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReason_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSuggestedPlayersSuggestedPlayersReason {
    // 
    FriendOfFriend = 3,
    // 
    LegacyPlayAgain = 9999,
    // 
    OnlineFriend = 2,
    // 
    PreviousPremade = 1,
    // 
    VictoriousComrade = 5,
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersReason& v) {
    switch(v) {
      case LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend:
        j = "FriendOfFriend";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain:
        j = "LegacyPlayAgain";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend:
        j = "OnlineFriend";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade:
        j = "PreviousPremade";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade:
        j = "VictoriousComrade";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersReason& v) {
    const auto& s = j.get<std::string>();
    if(s == "FriendOfFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend;
      return;
    }
    if(s == "LegacyPlayAgain"){
      v = LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain;
      return;
    }
    if(s == "OnlineFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend;
      return;
    }
    if(s == "PreviousPremade"){
      v = LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade;
      return;
    }
    if(s == "VictoriousComrade"){
      v = LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReason_HPP
