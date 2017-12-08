#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace leagueapi {
  struct LolSummonerGameloopPlayerInfoV1_t {
    LolSummonerRerollDataBagForClientV1_t rerollDataBag;
    nlohmann::json_t autoFillDataBagByQueueId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerGameloopPlayerInfoV1_t& v) {
    j["rerollDataBag"] = v.rerollDataBag;
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerGameloopPlayerInfoV1_t& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1_t>();
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<nlohmann::json_t>();
  }
  inline std::string to_string(const LolSummonerGameloopPlayerInfoV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
