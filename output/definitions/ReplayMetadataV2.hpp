#ifndef SWAGGER_TYPES_ReplayMetadataV2_HPP
#define SWAGGER_TYPES_ReplayMetadataV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ReplayMetadataV2 {
    // 
    uint32_t fileSize;
    // 
    std::string gameVersion;
  };

  inline void to_json(nlohmann::json& j, const ReplayMetadataV2& v) {
    j["fileSize"] = v.fileSize;
    j["gameVersion"] = v.gameVersion;
  }

  inline void from_json(const nlohmann::json& j, ReplayMetadataV2& v) {
    v.fileSize = j.at("fileSize").get<uint32_t>;
    v.gameVersion = j.at("gameVersion").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ReplayMetadataV2_HPP
