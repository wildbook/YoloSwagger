#ifndef SWAGGER_TYPES_ReplayMetadataV2_HPP
#define SWAGGER_TYPES_ReplayMetadataV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ReplayMetadataV2 {
    // 
    std::string gameVersion;
    // 
    uint32_t fileSize;
  };

  inline void to_json(nlohmann::json& j, const ReplayMetadataV2& v) {
    j["gameVersion"] = v.gameVersion;
    j["fileSize"] = v.fileSize;
  }

  inline void from_json(const nlohmann::json& j, ReplayMetadataV2& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.fileSize = j.at("fileSize").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_ReplayMetadataV2_HPP
