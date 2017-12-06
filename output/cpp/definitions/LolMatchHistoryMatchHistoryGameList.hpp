#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGameList_t {
    uint64_t gameIndexBegin;
    uint64_t gameCount;
    std::vector<LolMatchHistoryMatchHistoryGame_t> games;
    std::string gameEndDate;
    std::string gameBeginDate;
    uint64_t gameIndexEnd;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList_t& v) {
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["gameCount"] = v.gameCount;
    j["games"] = v.games;
    j["gameEndDate"] = v.gameEndDate;
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameIndexEnd"] = v.gameIndexEnd;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList_t& v) {
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>();
    v.gameCount = j.at("gameCount").get<uint64_t>();
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame_t>>();
    v.gameEndDate = j.at("gameEndDate").get<std::string>();
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>();
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>();
  }
}
