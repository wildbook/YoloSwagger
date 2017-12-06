#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsTradeContractDTO_t {
    std::string state;
    std::string responderInternalSummonerName;
    std::string requesterInternalSummonerName;
    int32_t responderChampionId;
    int32_t requesterChampionId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO_t& v) {
    j["state"] = v.state;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["responderChampionId"] = v.responderChampionId;
    j["requesterChampionId"] = v.requesterChampionId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO_t& v) {
    v.state = j.at("state").get<std::string>();
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>();
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>();
    v.responderChampionId = j.at("responderChampionId").get<int32_t>();
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>();
  }
}
