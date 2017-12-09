#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsTradeContractDTO_t {
    int32_t responderChampionId;
    int32_t requesterChampionId;
    std::string requesterInternalSummonerName;
    std::string responderInternalSummonerName;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO_t& v) {
    j["responderChampionId"] = v.responderChampionId;
    j["requesterChampionId"] = v.requesterChampionId;
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO_t& v) {
    v.responderChampionId = j.at("responderChampionId").get<int32_t>();
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t>();
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string>();
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string>();
    v.state = j.at("state").get<std::string>();
  }
  inline std::string to_string(const ChampSelectLcdsTradeContractDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
