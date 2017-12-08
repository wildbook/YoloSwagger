#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DownloadUrlRequestV2_t {
    uint64_t gameId;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const DownloadUrlRequestV2_t& v) {
    j["gameId"] = v.gameId;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, DownloadUrlRequestV2_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const DownloadUrlRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
