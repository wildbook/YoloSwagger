#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGameList_t {
    uint64_t gameIndexEnd;
    uint64_t gameCount;
    std::string gameEndDate;
    std::string gameBeginDate;
    uint64_t gameIndexBegin;
    std::vector<LolMatchHistoryMatchHistoryGame_t> games;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList_t& v) {
    j["gameIndexEnd"] = v.gameIndexEnd;
    j["gameCount"] = v.gameCount;
    j["gameEndDate"] = v.gameEndDate;
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["games"] = v.games;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList_t& v) {
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>();
    v.gameCount = j.at("gameCount").get<uint64_t>();
    v.gameEndDate = j.at("gameEndDate").get<std::string>();
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>();
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>();
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame_t>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGameList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
