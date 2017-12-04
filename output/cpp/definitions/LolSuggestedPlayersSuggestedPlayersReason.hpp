#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReason_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSuggestedPlayersSuggestedPlayersReason {
    // 
    OnlineFriend = 2,
    // 
    LegacyPlayAgain = 9999,
    // 
    FriendOfFriend = 3,
    // 
    PreviousPremade = 1,
    // 
    VictoriousComrade = 5,
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersReason& v) {
    switch(v) {
      case LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend:
        j = "OnlineFriend";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain:
        j = "LegacyPlayAgain";
      break;
      case LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend:
        j = "FriendOfFriend";
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
    if(s == "OnlineFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend;
      return;
    }
    if(s == "LegacyPlayAgain"){
      v = LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain;
      return;
    }
    if(s == "FriendOfFriend"){
      v = LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend;
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
