#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsTradeContractDTO_t {
    int32_t requesterChampionId;
    std::string requesterInternalSummonerName;
    int32_t responderChampionId;
    std::string responderInternalSummonerName;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO_t& v) {
    j["requesterChampionId"] = v.requesterChampionId;
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["responderChampionId"] = v.responderChampionId;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO_t& v) {
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>();
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>();
    v.responderChampionId = j.at("responderChampionId").get<int32_t>();
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>();
    v.state = j.at("state").get<std::string>();
  }
}
