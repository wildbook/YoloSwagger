#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeWarning_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeWarning_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingDodgeWarning {
    // 
    Penalty = 2,
    // 
    None = 0,
    // 
    Warning = 1,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeWarning& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeWarning::Penalty:
        j = "Penalty";
      break;
      case LolMatchmakingMatchmakingDodgeWarning::None:
        j = "None";
      break;
      case LolMatchmakingMatchmakingDodgeWarning::Warning:
        j = "Warning";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeWarning& v) {
    const auto& s = j.get<std::string>();
    if(s == "Penalty"){
      v = LolMatchmakingMatchmakingDodgeWarning::Penalty;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingMatchmakingDodgeWarning::None;
      return;
    }
    if(s == "Warning"){
      v = LolMatchmakingMatchmakingDodgeWarning::Warning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeWarning_HPP