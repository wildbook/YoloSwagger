#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ReplayMetadataV2_t {
    uint32_t fileSize;
    std::string gameVersion;
  };

  inline void to_json(nlohmann::json& j, const ReplayMetadataV2_t& v) {
    j["fileSize"] = v.fileSize;
    j["gameVersion"] = v.gameVersion;
  }

  inline void from_json(const nlohmann::json& j, ReplayMetadataV2_t& v) {
    v.fileSize = j.at("fileSize").get<uint32_t>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
  }
}
