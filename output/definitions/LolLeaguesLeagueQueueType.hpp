#ifndef SWAGGER_TYPES_LolLeaguesLeagueQueueType_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueQueueType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLeagueQueueType {
    // 
    FLEXSR = 3,
    // 
    FLEXTT = 2,
    // 
    NONE = 0,
    // 
    SOLO5V5 = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueQueueType& v) {
    switch(v) {
      case LolLeaguesLeagueQueueType::FLEXSR:
        j = "FLEXSR";
      break;
      case LolLeaguesLeagueQueueType::FLEXTT:
        j = "FLEXTT";
      break;
      case LolLeaguesLeagueQueueType::NONE:
        j = "NONE";
      break;
      case LolLeaguesLeagueQueueType::SOLO5V5:
        j = "SOLO5V5";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueQueueType& v) {
    const auto& s = j.get<std::string>();
    if(s == "FLEXSR"){
      v = LolLeaguesLeagueQueueType::FLEXSR;
      return;
    }
    if(s == "FLEXTT"){
      v = LolLeaguesLeagueQueueType::FLEXTT;
      return;
    }
    if(s == "NONE"){
      v = LolLeaguesLeagueQueueType::NONE;
      return;
    }
    if(s == "SOLO5V5"){
      v = LolLeaguesLeagueQueueType::SOLO5V5;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueQueueType_HPP
