#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsTradeContractDTO_t {
    std::string_t requesterInternalSummonerName;
    std::string_t state;
    int32_t_t requesterChampionId;
    std::string_t responderInternalSummonerName;
    int32_t_t responderChampionId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsTradeContractDTO_t& v) {
    j["requesterInternalSummonerName"] = v.requesterInternalSummonerName;
    j["state"] = v.state;
    j["requesterChampionId"] = v.requesterChampionId;
    j["responderInternalSummonerName"] = v.responderInternalSummonerName;
    j["responderChampionId"] = v.responderChampionId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsTradeContractDTO_t& v) {
    v.requesterInternalSummonerName = j.at("requesterInternalSummonerName").get<std::string_t>();
    v.state = j.at("state").get<std::string_t>();
    v.requesterChampionId = j.at("requesterChampionId").get<int32_t_t>();
    v.responderInternalSummonerName = j.at("responderInternalSummonerName").get<std::string_t>();
    v.responderChampionId = j.at("responderChampionId").get<int32_t_t>();
  }
  inline std::string to_string(const ChampSelectLcdsTradeContractDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
