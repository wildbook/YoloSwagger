#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyAutoFillQueueDto.hpp"
namespace leagueapi {
  struct LolLobbyAutoFillDto_t {
    std::vector<LolLobbyAutoFillQueueDto_t> autoFillQueues;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAutoFillDto_t& v) {
    j["autoFillQueues"] = v.autoFillQueues;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAutoFillDto_t& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolLobbyAutoFillQueueDto_t>>();
  }
  inline std::string to_string(const LolLobbyAutoFillDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
