#ifndef SWAGGER_TYPES_MultipleReplayMetadataResponseV2_HPP
#define SWAGGER_TYPES_MultipleReplayMetadataResponseV2_HPP
#include <json.hpp>
#include "MultipleReplayMetadataResponseItemV2.hpp"
namespace leagueapi {
  // 
  struct MultipleReplayMetadataResponseV2 {
    // 
    std::vector<MultipleReplayMetadataResponseItemV2> metadataResponses;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataResponseV2& v) {
    j["metadataResponses"] = v.metadataResponses;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataResponseV2& v) {
    v.metadataResponses = j.at("metadataResponses").get<std::vector<MultipleReplayMetadataResponseItemV2>>;
  }

}
#endif // SWAGGER_TYPES_MultipleReplayMetadataResponseV2_HPP
