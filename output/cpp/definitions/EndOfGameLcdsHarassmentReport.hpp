#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport_t {
    uint64_t reportedSummonerId;
    uint64_t gameId;
    uint64_t reportingSummonerId;
    std::string offense;
    std::string comment;
    std::string reportSource;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport_t& v) {
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["gameId"] = v.gameId;
    j["reportingSummonerId"] = v.reportingSummonerId;
    j["offense"] = v.offense;
    j["comment"] = v.comment;
    j["reportSource"] = v.reportSource;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport_t& v) {
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>();
    v.offense = j.at("offense").get<std::string>();
    v.comment = j.at("comment").get<std::string>();
    v.reportSource = j.at("reportSource").get<std::string>();
  }
  inline std::string to_string(const EndOfGameLcdsHarassmentReport_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
