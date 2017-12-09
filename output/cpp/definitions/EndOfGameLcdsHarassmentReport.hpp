#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport_t {
    uint64_t gameId;
    uint64_t reportingSummonerId;
    std::string reportSource;
    std::string comment;
    std::string offense;
    uint64_t reportedSummonerId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport_t& v) {
    j["gameId"] = v.gameId;
    j["reportingSummonerId"] = v.reportingSummonerId;
    j["reportSource"] = v.reportSource;
    j["comment"] = v.comment;
    j["offense"] = v.offense;
    j["reportedSummonerId"] = v.reportedSummonerId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>();
    v.reportSource = j.at("reportSource").get<std::string>();
    v.comment = j.at("comment").get<std::string>();
    v.offense = j.at("offense").get<std::string>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const EndOfGameLcdsHarassmentReport_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
