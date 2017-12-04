#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryGameList {
    // 
    std::string gameEndDate;
    // 
    uint64_t gameCount;
    // 
    std::vector<LolMatchHistoryMatchHistoryGame> games;
    // 
    uint64_t gameIndexBegin;
    // 
    std::string gameBeginDate;
    // 
    uint64_t gameIndexEnd;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["gameEndDate"] = v.gameEndDate;
    j["gameCount"] = v.gameCount;
    j["games"] = v.games;
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameIndexEnd"] = v.gameIndexEnd;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.gameEndDate = j.at("gameEndDate").get<std::string>;
    v.gameCount = j.at("gameCount").get<uint64_t>;
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>;
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>;
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>;
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryGameList_HPP
