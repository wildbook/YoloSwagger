#ifndef SWAGGER_TYPES_ChampSelectLcdsGameTimerDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsGameTimerDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct ChampSelectLcdsGameTimerDTO {
'    // 
    std::string currentGameState;
    // 
    double remainingTimeInMillis;
  };

  void to_json(nlohmann::json& j, const ChampSelectLcdsGameTimerDTO& v) {
    j["currentGameState"] = v.currentGameState;
    j["remainingTimeInMillis"] = v.remainingTimeInMillis;
  }

  void from_json(const nlohmann::json& j, ChampSelectLcdsGameTimerDTO& v) {
    v.currentGameState = j.at("currentGameState").get<std::string>;
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsGameTimerDTO_HPP
