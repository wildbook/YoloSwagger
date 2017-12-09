#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryList_t {
    std::string platformId;
    uint64_t accountId;
    LolMatchHistoryMatchHistoryGameList_t games;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryList_t& v) {
    j["platformId"] = v.platformId;
    j["accountId"] = v.accountId;
    j["games"] = v.games;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryList_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
