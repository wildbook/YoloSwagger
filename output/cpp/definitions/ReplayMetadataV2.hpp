#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ReplayMetadataV2_t {
    std::string gameVersion;
    uint32_t fileSize;
  };

  inline void to_json(nlohmann::json& j, const ReplayMetadataV2_t& v) {
    j["gameVersion"] = v.gameVersion;
    j["fileSize"] = v.fileSize;
  }

  inline void from_json(const nlohmann::json& j, ReplayMetadataV2_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.fileSize = j.at("fileSize").get<uint32_t>();
  }
  inline std::string to_string(const ReplayMetadataV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
