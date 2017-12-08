#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DownloadUrlRequestV2_t {
    std::string_t platformId;
    uint64_t_t gameId;
  };

  inline void to_json(nlohmann::json& j, const DownloadUrlRequestV2_t& v) {
    j["platformId"] = v.platformId;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, DownloadUrlRequestV2_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
  }
  inline std::string to_string(const DownloadUrlRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
