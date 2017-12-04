#ifndef SWAGGER_TYPES_LolClashMatchmakingDodgeWarning_HPP
#define SWAGGER_TYPES_LolClashMatchmakingDodgeWarning_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingDodgeWarning {
    // 
    Penalty = 2,
    // 
    None = 0,
    // 
    Warning = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeWarning& v) {
    switch(v) {
      case LolClashMatchmakingDodgeWarning::Penalty:
        j = "Penalty";
      break;
      case LolClashMatchmakingDodgeWarning::None:
        j = "None";
      break;
      case LolClashMatchmakingDodgeWarning::Warning:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeWarning& v) {
    const auto& s = j.get<std::string>();
    if(s == "Penalty"){
      v = LolClashMatchmakingDodgeWarning::Penalty;
      return;
    }
    if(s == "None"){
      v = LolClashMatchmakingDodgeWarning::None;
      return;
    }
    if(s == "Warning"){
      v = LolClashMatchmakingDodgeWarning::Warning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingDodgeWarning_HPP