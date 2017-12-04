#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryList_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryList_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryList {
    // 
    uint64_t accountId;
    // 
    LolMatchHistoryMatchHistoryGameList games;
    // 
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryList& v) {
    j["accountId"] = v.accountId;
    j["games"] = v.games;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryList& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryList_HPP
