#ifndef SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
#define SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
#include <json.hpp>
#include "LolSummonerRerollDataBagForClientV1.hpp"
namespace leagueapi {
  // 
  struct LolSummonerGameloopPlayerInfoV1 {
    // 
    nlohmann::json autoFillDataBagByQueueId;
    // 
    LolSummonerRerollDataBagForClientV1 rerollDataBag;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerGameloopPlayerInfoV1& v) {
    j["autoFillDataBagByQueueId"] = v.autoFillDataBagByQueueId;
    j["rerollDataBag"] = v.rerollDataBag;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerGameloopPlayerInfoV1& v) {
    v.autoFillDataBagByQueueId = j.at("autoFillDataBagByQueueId").get<nlohmann::json>;
    v.rerollDataBag = j.at("rerollDataBag").get<LolSummonerRerollDataBagForClientV1>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerGameloopPlayerInfoV1_HPP
