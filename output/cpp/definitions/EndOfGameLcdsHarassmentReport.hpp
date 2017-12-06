#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport_t {
    uint64_t reportingSummonerId;
    uint64_t reportedSummonerId;
    std::string reportSource;
    uint64_t gameId;
    std::string comment;
    std::string offense;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport_t& v) {
    j["reportingSummonerId"] = v.reportingSummonerId;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["reportSource"] = v.reportSource;
    j["gameId"] = v.gameId;
    j["comment"] = v.comment;
    j["offense"] = v.offense;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport_t& v) {
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
    v.reportSource = j.at("reportSource").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.comment = j.at("comment").get<std::string>();
    v.offense = j.at("offense").get<std::string>();
  }
}
