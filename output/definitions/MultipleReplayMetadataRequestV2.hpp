#ifndef SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
#define SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MultipleReplayMetadataRequestV2 {
    // 
    std::vector<uint64_t> gameIds;
    // 
    std::string platformId;
  };

  void to_json(nlohmann::json& j, const MultipleReplayMetadataRequestV2& v) {
    j["gameIds"] = v.gameIds;
    j["platformId"] = v.platformId;
  }

  void from_json(const nlohmann::json& j, MultipleReplayMetadataRequestV2& v) {
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MultipleReplayMetadataRequestV2_HPP
