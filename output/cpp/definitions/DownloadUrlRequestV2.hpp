#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DownloadUrlRequestV2_t {
    std::string platformId;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const DownloadUrlRequestV2_t& v) {
    j["platformId"] = v.platformId;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, DownloadUrlRequestV2_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const DownloadUrlRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
