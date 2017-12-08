#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsHarassmentReport_t {
    std::string_t comment;
    std::string_t reportSource;
    uint64_t_t gameId;
    uint64_t_t reportedSummonerId;
    uint64_t_t reportingSummonerId;
    std::string_t offense;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsHarassmentReport_t& v) {
    j["comment"] = v.comment;
    j["reportSource"] = v.reportSource;
    j["gameId"] = v.gameId;
    j["reportedSummonerId"] = v.reportedSummonerId;
    j["reportingSummonerId"] = v.reportingSummonerId;
    j["offense"] = v.offense;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsHarassmentReport_t& v) {
    v.comment = j.at("comment").get<std::string_t>();
    v.reportSource = j.at("reportSource").get<std::string_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t_t>();
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t_t>();
    v.offense = j.at("offense").get<std::string_t>();
  }
  inline std::string to_string(const EndOfGameLcdsHarassmentReport_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
