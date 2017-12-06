#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport_t {
    std::string comment;
    uint64_t gameId;
    std::string offense;
    std::string reportSource;
    uint64_t reportedSummonerId;
    uint64_t reportingSummonerId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport_t& v) {
    j["comment"] = v.comment;
    j["gameId"] = v.gameId;
    j["offense"] = v.offense;
    j["reportSource"] = v.reportSource;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["reportingSummonerId"] = v.reportingSummonerId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport_t& v) {
    v.comment = j.at("comment").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.offense = j.at("offense").get<std::string>();
    v.reportSource = j.at("reportSource").get<std::string>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>();
  }
}
