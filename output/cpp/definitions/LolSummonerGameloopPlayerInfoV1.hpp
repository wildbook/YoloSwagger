#ifndef SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
#define SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
#include <json.hpp>
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace leagueapi {
  // 
  struct LolSummonerGameloopPlayerInfoV1 {
    // 
    LolSummonerRerollDataBagForClientV1 rerollDataBag;
    // 
    nlohmann::json autoFillDataBagByQueueId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerGameloopPlayerInfoV1& v) {
    j["rerollDataBag"] = v.rerollDataBag;
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerGameloopPlayerInfoV1& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>;
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
