#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsGameTimerDTO_t {
    double remainingTimeInMillis;
    std::string currentGameState;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameTimerDTO_t& v) {
    j["remainingTimeInMillis"] = v.remainingTimeInMillis;
    j["currentGameState"] = v.currentGameState;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameTimerDTO_t& v) {
    v.remainingTimeInMillis = j.at("remainingTimeInMillis").get<double>();
    v.currentGameState = j.at("currentGameState").get<std::string>();
  }
  inline std::string to_string(const ChampSelectLcdsGameTimerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
