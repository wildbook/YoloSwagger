#ifndef SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
#define SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
#include <json.hpp>
#include "ReplayResponseStatus.hpp"
#include "ReplayMetadataV2.hpp"
namespace leagueapi {
  // 
  struct MultipleReplayMetadataResponseItemV2 {
    // 
    uint64_t gameId;
    // 
    ReplayMetadataV2 metadata;
    // 
    ReplayResponseStatus status;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseItemV2& v) {
    j["gameId"] = v.gameId;
    j["metadata"] = v.metadata;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseItemV2& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.metadata = j.at("metadata").get<ReplayMetadataV2>;
    v.status = j.at("status").get<ReplayResponseStatus>;
  }

}
#endif // SWAGGER_TYPES_MultipleReplayMetadataResponseItemV2_HPP
