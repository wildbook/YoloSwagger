#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryList_t {
    std::string_t platformId;
    LolMatchHistoryMatchHistoryGameList_t games;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryList_t& v) {
    j["platformId"] = v.platformId;
    j["games"] = v.games;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryList_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
