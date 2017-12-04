#ifndef SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
#define SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
#include <json.hpp>
#include "ReplayMetadataV2.hpp"
#include "ReplayResponseStatus.hpp"
namespace leagueapi {
  // 
  struct MultipleReplayMetadataResponseItemV2 {
    // 
    ReplayResponseStatus status;
    // 
    uint64_t gameId;
    // 
    ReplayMetadataV2 metadata;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2& v) {
    j["status"] = v.status;
    j["gameId"] = v.gameId;
    j["metadata"] = v.metadata;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2& v) {
    v.status = j.at("status").get<ReplayResponseStatus>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.metadata = j.at("metadata").get<ReplayMetadataV2>;
  }

}
#endif // SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
