#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace leagueapi {
  struct LolSummonerGameloopPlayerInfoV1_t {
    nlohmann::json autoFillDataBagByQueueId;
    LolSummonerRerollDataBagForClientV1_t rerollDataBag;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerGameloopPlayerInfoV1_t& v) {
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId;
    j["rerollDataBag"] = v.rerollDataBag;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerGameloopPlayerInfoV1_t& v) {
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<nlohmann::json>();
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1_t>();
  }
  inline std::string to_string(const LolSummonerGameloopPlayerInfoV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
