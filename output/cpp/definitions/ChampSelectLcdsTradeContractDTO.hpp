#ifndef SWAGGER_TYPES_ChampSelectLcdsTradeContractDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsTradeContractDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsTradeContractDTO {
    // 
    std::string requesterInternalSummonerName;
    // 
    std::string state;
    // 
    int32_t requesterChampionId;
    // 
    std::string responderInternalSummonerName;
    // 
    int32_t responderChampionId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO& v) {
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["state"] = v.state;
    j["requesterChampionId"] = v.requesterChampionId;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["responderChampionId"] = v.responderChampionId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO& v) {
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>;
    v.state = j.at("state").get<std::string>;
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>;
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>;
    v.responderChampionId = j.at("responderChampionId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsTradeContractDTO_HPP
