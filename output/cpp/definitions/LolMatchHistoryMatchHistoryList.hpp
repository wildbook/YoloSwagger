#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryList_t {
    uint64_t accountId;
    LolMatchHistoryMatchHistoryGameList_t games;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryList_t& v) {
    j["accountId"] = v.accountId;
    j["games"] = v.games;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryList_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList_t>();
    v.platformId = j.at("platformId").get<std::string>();
  }
}
