#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGameList_t {
    std::string_t gameEndDate;
    uint64_t_t gameCount;
    std::vector<LolMatchHistoryMatchHistoryGame_t> games;
    uint64_t_t gameIndexBegin;
    std::string_t gameBeginDate;
    uint64_t_t gameIndexEnd;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGameList_t& v) {
    j["gameEndDate"] = v.gameEndDate;
    j["gameCount"] = v.gameCount;
    j["games"] = v.games;
    j["gameIndexBegin"] = v.gameIndexBegin;
    j["gameBeginDate"] = v.gameBeginDate;
    j["gameIndexEnd"] = v.gameIndexEnd;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGameList_t& v) {
    v.gameEndDate = j.at("gameEndDate").get<std::string_t>();
    v.gameCount = j.at("gameCount").get<uint64_t_t>();
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame_t>>();
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t_t>();
    v.gameBeginDate = j.at("gameBeginDate").get<std::string_t>();
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGameList_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
