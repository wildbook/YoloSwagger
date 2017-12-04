#ifndef SWAGGER_TYPES_ClashRewardKeyType_HPP
#define SWAGGER_TYPES_ClashRewardKeyType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClashRewardKeyType {
    // 
    TOKENS = 2,
    // 
    LOWEST_POSITION = 3,
    // 
    CUP = 1,
    // 
    WINS = 4,
    // 
    THEME_VP = 5,
    // 
    TIER = 0,
    // 
    SEASON_VP = 6,
    // 
    SEASON_FLAG_COUNT = 7,
  };

  inline void to_json(nlohmann::json& j, const ClashRewardKeyType& v) {
    switch(v) {
      case ClashRewardKeyType::TOKENS:
        j = "TOKENS";
      break;
      case ClashRewardKeyType::LOWEST_POSITION:
        j = "LOWEST_POSITION";
      break;
      case ClashRewardKeyType::CUP:
        j = "CUP";
      break;
      case ClashRewardKeyType::WINS:
        j = "WINS";
      break;
      case ClashRewardKeyType::THEME_VP:
        j = "THEME_VP";
      break;
      case ClashRewardKeyType::TIER:
        j = "TIER";
      break;
      case ClashRewardKeyType::SEASON_VP:
        j = "SEASON_VP";
      break;
      case ClashRewardKeyType::SEASON_FLAG_COUNT:
        j = "SEASON_FLAG_COUNT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClashRewardKeyType& v) {
    const auto& s = j.get<std::string>();
    if(s == "TOKENS"){
      v = ClashRewardKeyType::TOKENS;
      return;
    }
    if(s == "LOWEST_POSITION"){
      v = ClashRewardKeyType::LOWEST_POSITION;
      return;
    }
    if(s == "CUP"){
      v = ClashRewardKeyType::CUP;
      return;
    }
    if(s == "WINS"){
      v = ClashRewardKeyType::WINS;
      return;
    }
    if(s == "THEME_VP"){
      v = ClashRewardKeyType::THEME_VP;
      return;
    }
    if(s == "TIER"){
      v = ClashRewardKeyType::TIER;
      return;
    }
    if(s == "SEASON_VP"){
      v = ClashRewardKeyType::SEASON_VP;
      return;
    }
    if(s == "SEASON_FLAG_COUNT"){
      v = ClashRewardKeyType::SEASON_FLAG_COUNT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClashRewardKeyType_HPP
