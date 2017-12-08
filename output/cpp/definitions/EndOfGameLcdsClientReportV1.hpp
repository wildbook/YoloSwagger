#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsClientReportV1_t {
    std::string_t offenses;
    uint64_t_t offenderSummonerId;
    uint64_t_t gameId;
    std::string_t comments;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsClientReportV1_t& v) {
    j["offenses"] = v.offenses;
    j["offenderSummonerId"] = v.offenderSummonerId;
    j["gameId"] = v.gameId;
    j["comments"] = v.comments;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsClientReportV1_t& v) {
    v.offenses = j.at("offenses").get<std::string_t>();
    v.offenderSummonerId = j.at("offenderSummonerId").get<uint64_t_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.comments = j.at("comments").get<std::string_t>();
  }
  inline std::string to_string(const EndOfGameLcdsClientReportV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
