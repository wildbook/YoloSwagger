#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerAutoFillQueueDto.hpp"
namespace leagueapi {
  struct LolSummonerAutoFillDto_t {
    std::vector<LolSummonerAutoFillQueueDto_t> autoFillQueues;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerAutoFillDto_t& v) {
    j["autoFillQueues"] = v.autoFillQueues;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerAutoFillDto_t& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolSummonerAutoFillQueueDto_t>>();
  }
  inline std::string to_string(const LolSummonerAutoFillDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
