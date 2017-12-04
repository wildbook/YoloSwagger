#ifndef SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
#define SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MultipleReplayMetadataRequestV2 {
    // 
    std::string platformId;
    // 
    std::vector<uint64_t> gameIds;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataRequestV2& v) {
    j["platformId"] = v.platformId;
    j["gameIds"] = v.gameIds;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataRequestV2& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
