#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsTradeContractDTO_t {
    std::string requesterInternalSummonerName;
    int32_t responderChampionId;
    std::string state;
    std::string responderInternalSummonerName;
    int32_t requesterChampionId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO_t& v) {
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["responderChampionId"] = v.responderChampionId;
    j["state"] = v.state;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["requesterChampionId"] = v.requesterChampionId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO_t& v) {
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>();
    v.responderChampionId = j.at("responderChampionId").get<int32_t>();
    v.state = j.at("state").get<std::string>();
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>();
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsTradeContractDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
