#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGameList_t {
    std::vector<LolMatchHistoryMatchHistoryGame_t> games;
    uint64_t gameIndexBegin;
    std::string gameBeginDate;
    uint64_t gameCount;
    std::string gameEndDate;
    uint64_t gameIndexEnd;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList_t& v) {
    j["games"] = v.games;
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameCount"] = v.gameCount;
    j["gameEndDate"] = v.gameEndDate;
    j["gameIndexEnd"] = v.gameIndexEnd;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList_t& v) {
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame_t>>();
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>();
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>();
    v.gameCount = j.at("gameCount").get<uint64_t>();
    v.gameEndDate = j.at("gameEndDate").get<std::string>();
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGameList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
