#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryList_t {
    LolMatchHistoryMatchHistoryGameList_t games;
    uint64_t accountId;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryList_t& v) {
    j["games"] = v.games;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryList_t& v) {
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
